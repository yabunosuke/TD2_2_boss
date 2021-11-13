#pragma once
#include "Vector3.h"

namespace Collision
{
// 球体同士の当たり判定
bool IsBallToBallCollision(const Vector3& pos1, const float& r1, const Vector3& pos2, const float& r2);

// 直方体同士の当たり判定
bool IsBoxToBoxCollision(const Vector3& pos1, const Vector3& rotation1, const Vector3& scale1, const Vector3& pos2, const Vector3& rotation2, const Vector3& scale2);

// 衝突予測
// 箱の場合は、Vector3(横幅, 高さ, 奥行).Length() / 2を入れれば使えます
bool IsPredictCollisionBall(const Vector3& pos1, const Vector3& speed1, const float& r1, const Vector3& pos2, const Vector3& speed2, const float& r2);
};
