//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface SubscriptionEntitlementsOperation : ISOperation
{
    _Bool _ignoreCaches;	// 91 = 0x5b
    NSString *_clientIdentifier;	// 96 = 0x60
    CDUnknownBlockType _subscriptionEntitlementsBlock;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000088c14
@property(copy) CDUnknownBlockType subscriptionEntitlementsBlock; // @synthesize subscriptionEntitlementsBlock=_subscriptionEntitlementsBlock;
@property _Bool ignoreCaches; // @synthesize ignoreCaches=_ignoreCaches;
@property(copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (id)_fetchSubscriptionEntitlements:(id *)arg1;	// IMP=0x0010000000088764
- (void)run;	// IMP=0x0010000000088484

@end

