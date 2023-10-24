//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKBonjourServiceConfiguration : NSObject
{
    NSString *_serviceName;	// 8 = 0x8
    NSString *_serviceType;	// 16 = 0x10
    NSString *_serviceDomain;	// 24 = 0x18
}

+ (id)new;	// IMP=0x001000000005fc39
- (void).cxx_destruct;	// IMP=0x00000000000602db
@property(copy, nonatomic) NSString *serviceDomain; // @synthesize serviceDomain=_serviceDomain;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000060259
- (id)description;	// IMP=0x0000000000060148
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005fec8
- (unsigned long long)hash;	// IMP=0x000000000005fdc3
- (id)initWithServiceName:(id)arg1 serviceTyoe:(id)arg2 serviceDomain:(id)arg3;	// IMP=0x000000000005fcd7
- (id)init;	// IMP=0x000000000005fc68

@end

