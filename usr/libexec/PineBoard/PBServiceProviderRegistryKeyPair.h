//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBServiceProviderRegistryKeyPair : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_providerType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000007eeca
@property(copy) NSString *providerType; // @synthesize providerType=_providerType;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x001000000007edab
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007ec39
- (unsigned long long)hash;	// IMP=0x001000000007eba6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007eb0a

@end

