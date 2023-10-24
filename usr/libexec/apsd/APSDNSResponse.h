//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface APSDNSResponse : NSObject
{
    NSString *_hostname;	// 8 = 0x8
    NSArray *_ipv4Address;	// 16 = 0x10
    NSArray *_ipv6Address;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000213e3
- (void).cxx_destruct;	// IMP=0x002000000002162e
@property(readonly, nonatomic) NSArray *ipv6Address; // @synthesize ipv6Address=_ipv6Address;
@property(readonly, nonatomic) NSArray *ipv4Address; // @synthesize ipv4Address=_ipv4Address;
@property(readonly, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002158f
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000213eb
- (id)initResponseForHostname:(id)arg1 ipv4Address:(id)arg2 ipv6Address:(id)arg3;	// IMP=0x00100000000212d0

@end

