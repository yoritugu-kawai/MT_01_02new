#pragma once
#include <Novice.h>
#include <imgui.h>
#include <cassert>
#include <cmath>
#include <numbers>
#include "Vector3.h"
#include "Matrix4x4.h"

struct Sphere
{
	Vector3 center;
	float radius;
};

void VectorScreenPrintf(int x, int y, const Vector3& vector, const char* label);

Vector3 Add(const Vector3& v1, const Vector3& v2);

Vector3 Subtract(const Vector3& v1, const Vector3& v2);

float Dot(const Vector3& v1, const Vector3& v2);

Vector3 Cross(const Vector3& v1, const Vector3& v2);

Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

Matrix4x4 Inverse(const Matrix4x4& m);

Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);


Matrix4x4 MakeTranslateMatrix(const Vector3& translate);


Matrix4x4 MakeScaleMatrix(const Vector3& scale);

Matrix4x4 MakeRotateXMatrix(float radian);


Matrix4x4 MakeRotateYMatrix(float radian);


Matrix4x4 MakeRotateZMatrix(float radian);


Matrix4x4 MakeRotateXYZMatrix(const Vector3& rotate);


Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rotate, const Vector3& translate);

Matrix4x4 MakeOrthGraphicMatrix(float left, float top, float right, float bottom, float nearClip, float farClip);

Matrix4x4 MakePerspectiveFovMatrix(float fovY, float aspectRatio, float nearClip, float farClip);

Matrix4x4 MakeViewPortMatrix(float left, float top, float width, float height, float minDepth, float maxDepth);


void DrawGrid(const Matrix4x4& viewProjectionMatrix, const Matrix4x4& viewportMatrix);


void DrawSphere(const Sphere& sphere, const Matrix4x4& viewProjectionMatrix, const Matrix4x4& viewPortMatrix, uint32_t color);
