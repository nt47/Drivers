#include <ntddk.h>

// 驱动程序卸载函数实现
VOID UnloadDriver(_In_ PDRIVER_OBJECT DriverObject) {
    UNREFERENCED_PARAMETER(DriverObject);

    // 输出卸载信息至调试输出
    DbgPrint("Driver Unloaded\n");
}

// 驱动程序入口函数实现
NTSTATUS DriverEntry(_In_ PDRIVER_OBJECT DriverObject, _In_ PUNICODE_STRING RegistryPath) {
    UNREFERENCED_PARAMETER(RegistryPath);

    // 输出 "Hello, World!" 至调试输出
    DbgPrint("Hello, World!\n");

    // 设置驱动程序卸载函数
    DriverObject->DriverUnload = UnloadDriver;

    // 返回成功状态
    return STATUS_SUCCESS;
}

