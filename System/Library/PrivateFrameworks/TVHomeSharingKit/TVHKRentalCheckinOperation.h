//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, TVHKAsynchronousWorkToken;

__attribute__((visibility("hidden")))
@interface TVHKRentalCheckinOperation
{
    NSOperation *_mediaServerCheckoutOperation;	// 8 = 0x8
    TVHKAsynchronousWorkToken *_checkinWorkToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003516a
@property(retain, nonatomic) TVHKAsynchronousWorkToken *checkinWorkToken; // @synthesize checkinWorkToken=_checkinWorkToken;
@property(retain, nonatomic) NSOperation *mediaServerCheckoutOperation; // @synthesize mediaServerCheckoutOperation=_mediaServerCheckoutOperation;
- (void)_startMediaServerCheckoutOperation;	// IMP=0x0000000000034f7b
- (void)_startStoreCheckin;	// IMP=0x0000000000034dbd
- (void)cancel;	// IMP=0x0000000000034d10
- (void)executionDidBegin;	// IMP=0x0000000000034cfe

@end
