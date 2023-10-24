//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HAP2TLVErrorsWrapper : NSObject
{
    long long _value;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000de8bf
@property(nonatomic) long long value; // @synthesize value=_value;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000de793
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000de742
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000000de728
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000de5ca
- (id)initWithValue:(long long)arg1;	// IMP=0x00000000000de58d
- (id)init;	// IMP=0x00000000000de551

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

