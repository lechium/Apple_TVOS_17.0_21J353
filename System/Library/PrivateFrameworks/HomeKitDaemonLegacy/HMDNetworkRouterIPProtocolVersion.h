//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterIPProtocolVersion : NSObject
{
    long long _protocol;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004b4cc5
+ (id)protocolFromIPProtocolVersion:(unsigned char)arg1;	// IMP=0x001000000044b234
@property(nonatomic) long long protocol; // @synthesize protocol=_protocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b4b6e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b4b1d
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004b4b03
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004b49b1
- (id)initWithProtocol:(long long)arg1;	// IMP=0x00000000004b4974
- (id)init;	// IMP=0x00000000004b4938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

