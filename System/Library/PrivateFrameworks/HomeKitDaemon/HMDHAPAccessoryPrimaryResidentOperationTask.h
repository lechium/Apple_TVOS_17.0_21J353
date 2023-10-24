//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;
@protocol HMDHAPAccessoryTask;

__attribute__((visibility("hidden")))
@interface HMDHAPAccessoryPrimaryResidentOperationTask
{
    NSMutableArray *_remoteFallbackTasks;	// 48 = 0x30
    id <HMDHAPAccessoryTask> _localTask;	// 56 = 0x38
}

+ (void)filterAccessoriesByDevicesFromMap:(id)arg1 currentDeviceAccessories:(id)arg2 otherDeviceAccessories:(id)arg3;	// IMP=0x0060000000cafbf9
- (void).cxx_destruct;	// IMP=0x0000000000caee18
@property(retain, nonatomic) id <HMDHAPAccessoryTask> localTask; // @synthesize localTask=_localTask;
@property(retain, nonatomic) NSMutableArray *remoteFallbackTasks; // @synthesize remoteFallbackTasks=_remoteFallbackTasks;
- (id)_makeLocalTaskWithRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000caed0a
- (id)_makeRemoteWithFallbackTaskWithRequests:(id)arg1 delegateDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000caec3d
- (id)_fallbackTaskForDevice:(id)arg1;	// IMP=0x0000000000cae986
- (void)_processLocalRequests:(id)arg1 responseWaitGroup:(id)arg2;	// IMP=0x0000000000cae6bf
- (void)_fanOutRemoteRequests:(id)arg1 residentToAccessoriesMap:(id)arg2 responseWaitGroup:(id)arg3;	// IMP=0x0000000000cae021
- (void)execute;	// IMP=0x0000000000cadd59
- (id)initWithContext:(id)arg1 requests:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000cadd2a

@end

