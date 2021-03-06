#ifndef __MEM_ALLOCATOR_SHARED_H__
#define __MEM_ALLOCATOR_SHARED_H__

#define		MEM_ALLOCATOR_NAME				L"MemAllocator"
#define		MEM_ALLOCATOR_SYS_FILE			MEM_ALLOCATOR_NAME \
											L".sys"
// There are symbols for driver
#define		MEM_ALLOCATOR_DEVICENAME_DRV	L"\\Device\\dev" MEM_ALLOCATOR_NAME
#define		MEM_ALLOCATOR_LINKNAME_DRV 		L"\\DosDevices\\" MEM_ALLOCATOR_NAME

// There are symbols for command line app
#define		MEM_ALLOCATOR_LINKNAME_APP 		L"\\\\.\\" MEM_ALLOCATOR_NAME
#define		MEM_ALLOCATOR_SERVNAME_APP		MEM_ALLOCATOR_NAME


// Device type in user defined range
#define MEM_ALLOCATOR_DEVICE_IOCTL  0x8301
#define MEM_ALLOCATOR_BASIC_MEM_ACCESS	(unsigned) CTL_CODE(MEM_ALLOCATOR_DEVICE_IOCTL, 0x800, METHOD_NEITHER, FILE_ANY_ACCESS)

#define MEM_ALLOCATOR_START_SET_THREAD	(unsigned) CTL_CODE(MEM_ALLOCATOR_DEVICE_IOCTL, 0x840, METHOD_NEITHER, FILE_ANY_ACCESS)
#define MEM_ALLOCATOR_STOP_THIS_THREAD	(unsigned) CTL_CODE(MEM_ALLOCATOR_DEVICE_IOCTL, 0x840+1, METHOD_NEITHER, FILE_ANY_ACCESS)

#endif // __MEM_ALLOCATOR_SHARED_H__