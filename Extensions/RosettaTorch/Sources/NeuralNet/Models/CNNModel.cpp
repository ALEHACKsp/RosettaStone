 // Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

// It is based on peter1591's hearthstone-ai repository.
// References: https://github.com/peter1591/hearthstone-ai

#include <NeuralNet/Models/CNNModel.hpp>

namespace RosettaTorch::NeuralNet
{
CNNModel::CNNModel()
{
    register_module("heroConv1", heroConv1);
    register_module("minionConv1", minionConv1);
    register_module("fc1", fc1);
    register_module("fc2", fc2);
}

torch::Tensor CNNModel::encodeHero(torch::Tensor x)
{
    x = x.view({hero_in_dim, 2, 1});
    x = heroConv1->forward(x);
    x = torch::leaky_relu(x, .2);
    x = x.view({ 1, 1, -1 });
    return x;
}

torch::Tensor CNNModel::encodeMinion(torch::Tensor x)
{
    x = x.view({minion_in_dim, minion_count * 2, 1});
    x = minionConv1->forward(x);
    x = torch::leaky_relu(x, .2);
    x = x.view({1, 1, -1});
    return x;
}

torch::Tensor CNNModel::encodeStandalone(torch::Tensor x)
{
    x = x.view({1, 1, -1});
    return x;
}

torch::Tensor CNNModel::forward(torch::Tensor hero,
                                torch::Tensor minion, 
    torch::Tensor standalone)
{
    // input shape  : (2,), (14,), (1,)
    // output shape : (1,) 

    // Encodes the information of heros
    auto outHero = encodeHero(hero);

    // Encodes the information of minions
    auto outMinion = encodeMinion(minion);

    // Encodes the information of 'standalone'
    auto outStandalone = encodeStandalone(standalone);

    auto concatFeatures =
        torch::cat(( outHero, outMinion, outStandalone ), -1);

    concatFeatures = fc1->forward(concatFeatures);
    concatFeatures = torch::leaky_relu(concatFeatures, .2);

    concatFeatures = fc2->forward(concatFeatures);
    concatFeatures = torch::tanh(concatFeatures);

    return concatFeatures;
}
}  // namespace RosettaTorch::NeuralNet