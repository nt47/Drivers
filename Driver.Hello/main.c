#include <ntddk.h>

// ��������ж�غ���ʵ��
VOID UnloadDriver(_In_ PDRIVER_OBJECT DriverObject) {
    UNREFERENCED_PARAMETER(DriverObject);

    // ���ж����Ϣ���������
    DbgPrint("Driver Unloaded\n");
}

// ����������ں���ʵ��
NTSTATUS DriverEntry(_In_ PDRIVER_OBJECT DriverObject, _In_ PUNICODE_STRING RegistryPath) {
    UNREFERENCED_PARAMETER(RegistryPath);

    // ��� "Hello, World!" ���������
    DbgPrint("Hello, World!\n");

    // ������������ж�غ���
    DriverObject->DriverUnload = UnloadDriver;

    // ���سɹ�״̬
    return STATUS_SUCCESS;
}

