//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMUserCloudShareRepairInfo;

__attribute__((visibility("hidden")))
@interface HMDUserCloudShareRepairRequest
{
    HMUserCloudShareRepairInfo *_repairInfo;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000006c21fe
@property(readonly) HMUserCloudShareRepairInfo *repairInfo; // @synthesize repairInfo=_repairInfo;
- (id)description;	// IMP=0x00000000006c212b
- (id)initWithStartDate:(id)arg1 containerID:(id)arg2 home:(id)arg3 repairInfo:(id)arg4;	// IMP=0x00000000006c20a1

@end
