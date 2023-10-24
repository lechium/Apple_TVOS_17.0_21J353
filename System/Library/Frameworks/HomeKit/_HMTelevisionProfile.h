//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_HMAccessoryProfile.h"

@class NSArray;
@protocol _HMTelevisionProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMTelevisionProfile : _HMAccessoryProfile
{
    _Bool _mediaSourceDisplayOrderModifiable;	// 12 = 0xc
    NSArray *_mediaSourceDisplayOrder;	// 16 = 0x10
    id <_HMTelevisionProfileDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000270d3b
@property __weak id <_HMTelevisionProfileDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) _Bool mediaSourceDisplayOrderModifiable; // @synthesize mediaSourceDisplayOrderModifiable=_mediaSourceDisplayOrderModifiable;
- (void)_handleSourceDisplayOrderUpdated:(id)arg1;	// IMP=0x0000000000270b48
- (void)_notifyDelegateOfUpdatedSourceDisplayOrder:(id)arg1;	// IMP=0x0000000000270a27
- (void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000027066a
- (id)messageReceiveQueue;	// IMP=0x000000000027061a
- (id)messageDestination;	// IMP=0x00000000002705b1
- (id)messageTargetUUID;	// IMP=0x0000000000270561
- (_Bool)isMediaSourceDisplayOrderModifiable;	// IMP=0x0000000000270530
@property(retain) NSArray *mediaSourceDisplayOrder; // @synthesize mediaSourceDisplayOrder=_mediaSourceDisplayOrder;
- (void)_registerNotificationHandlers;	// IMP=0x000000000027038f
- (id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2;	// IMP=0x000000000027023c

@end
