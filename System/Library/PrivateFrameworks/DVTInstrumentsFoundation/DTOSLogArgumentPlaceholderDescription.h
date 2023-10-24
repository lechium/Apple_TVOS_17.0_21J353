//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DTOSLogArgumentPlaceholderDescription : NSObject
{
    long long _placeholderKind;	// 8 = 0x8
    NSString *_placeholderToken;	// 16 = 0x10
    NSString *_placeholderKey;	// 24 = 0x18
    NSString *_placeholderObjectValue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000199dc
@property(readonly, nonatomic) NSString *placeholderObjectValue; // @synthesize placeholderObjectValue=_placeholderObjectValue;
@property(readonly, nonatomic) NSString *placeholderKey; // @synthesize placeholderKey=_placeholderKey;
@property(readonly, nonatomic) NSString *placeholderToken; // @synthesize placeholderToken=_placeholderToken;
@property(readonly, nonatomic) long long placeholderKind; // @synthesize placeholderKind=_placeholderKind;
- (unsigned long long)hash;	// IMP=0x000000000001999e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000019993
- (id)initWithPlaceholderToken:(id)arg1;	// IMP=0x00000000000194c0

@end

