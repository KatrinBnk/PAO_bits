int findMostSignificantOnePosition(unsigned long long int& number)
{
    int position = -1; // ���������� ��� �������� ������� ����� ������� �������
    int bitIndex = 0; // ������ �������� ����

    // ���������� ���� ����� ������ ������
    while (number != 0)
    {
        if (number & 1)
        {
            position = bitIndex; // ��������� ������� ����� ������� �������
        }

        number >>= 1; // �������� ����� ������ �� ���� ���
        bitIndex++; // ����������� ������ �������� ����
    }

    return position;
<<<<<<< HEAD
}
=======
}
>>>>>>> 07f38bcb5a8691e0f9da8b0e3934363f1fd0a694
