//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLAccessoryLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000003b0416
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000003b03fd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003b03a0
+ (_Bool)isSupported;	// IMP=0x00100000003b08f7
- (void)syncSetNavigationStateChange:(int)arg1;	// IMP=0x00200000003b06d5
- (void)fetchAccessoryPASCDTransmissionStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000003b068d
- (void)fetchAccessoryBitSetWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000003b0662
- (void)fetchIsAccessoryConnectedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000003b062a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000003b0602
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000003b05d5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000003b05ad
- (void *)adaptee;	// IMP=0x00100000003b057a
- (void)endService;	// IMP=0x00100000003b055f
- (void)beginService;	// IMP=0x00100000003b04af
- (id)init;	// IMP=0x00100000003b0472

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
