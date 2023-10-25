//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADAutoSetPolicy, NSString;

__attribute__((visibility("hidden")))
@interface MADAutoSetSchedulerTriggered : NSObject
{
    NSString *_clientDomainName;	// 8 = 0x8
    NSString *_assetSetIdentifier;	// 16 = 0x10
    MADAutoSetPolicy *_schedulerPolicy;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000194056
- (void).cxx_destruct;	// IMP=0x000000000019423d
@property(retain, nonatomic) MADAutoSetPolicy *schedulerPolicy; // @synthesize schedulerPolicy=_schedulerPolicy;
@property(readonly, retain, nonatomic) NSString *assetSetIdentifier; // @synthesize assetSetIdentifier=_assetSetIdentifier;
@property(readonly, retain, nonatomic) NSString *clientDomainName; // @synthesize clientDomainName=_clientDomainName;
- (id)summary;	// IMP=0x000000000019413f
- (id)description;	// IMP=0x000000000019412d
- (id)copy;	// IMP=0x000000000019405e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000193f73
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000193e63
- (id)initForClientDomainName:(id)arg1 forAssetSetIdentifier:(id)arg2 withSchedulerPolicy:(id)arg3;	// IMP=0x0000000000193dab

@end
