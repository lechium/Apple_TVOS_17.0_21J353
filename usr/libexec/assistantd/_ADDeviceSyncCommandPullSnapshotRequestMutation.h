//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncCommandPullSnapshotRequest, NSString;

@interface _ADDeviceSyncCommandPullSnapshotRequestMutation : NSObject
{
    ADDeviceSyncCommandPullSnapshotRequest *_base;	// 8 = 0x8
    NSString *_dataType;	// 16 = 0x10
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasDataType:1;
    } _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000008d578
- (void)setDataType:(id)arg1;	// IMP=0x001000000008d558
- (id)getDataType;	// IMP=0x001000000008d520
- (_Bool)isDirty;	// IMP=0x001000000008d515
- (id)initWithBase:(id)arg1;	// IMP=0x001000000008d4aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
