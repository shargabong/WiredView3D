#pragma once
#include <cmath>

const float DEFAULT_FOV = 60.0f;
const float DEFAULT_CAMERA_DISTANCE = 3.0f;

class Camera
{
public:
    float fov;
    float cameraDistance;

    Camera()
        : fov(DEFAULT_FOV), cameraDistance(DEFAULT_CAMERA_DISTANCE) {
    }

    void reset() {
        fov = DEFAULT_FOV;
        cameraDistance = DEFAULT_CAMERA_DISTANCE;
    }

    // � ������� ���� ����� ��������:
    // - ��������� ������ (position)
    // - �����, ���� ������� ������ (target/lookAt)
    // - ������ "�����" (up_vector)
    // - ������ ��� ����������� � �������� ������ (pan, tilt, zoom, orbit)
    // - ������ ��� ��������� ������ ���� (View Matrix) � �������� (Projection Matrix)
};