//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface _mkMapServiceWalletMerchantTicket : NSObject
{
    id <GEOMapServiceTicket> _ticket;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000018fb03
- (void)cancel;	// IMP=0x000000000018fad1
- (void)submitWithCompletionQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000018f82c
- (id)initWithRequest:(id)arg1 traits:(id)arg2;	// IMP=0x000000000018f209

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

