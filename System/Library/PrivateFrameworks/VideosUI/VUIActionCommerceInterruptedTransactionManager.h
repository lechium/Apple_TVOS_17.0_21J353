//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIActionCommerceInterruptedTransactionManager : NSObject
{
    NSDictionary *interruptedOfferDetails;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0060000000223920
- (void).cxx_destruct;	// IMP=0x0000000000223a42
- (void)setLastInterruptedOfferDetails:(id)arg1;	// IMP=0x00000000002239e8
- (id)getLastInterruptedOfferDetails;	// IMP=0x00000000002239a5

@end
