//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BMMultiStreamTimestampClockVector : NSObject
{
    NSMutableDictionary *_vectorClock;	// 8 = 0x8
}

+ (id)deserialize:(id)arg1 error:(id *)arg2;	// IMP=0x002000000000ffc7
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000fe1d
- (void).cxx_destruct;	// IMP=0x002000000001003d
- (id)serialize:(id *)arg1;	// IMP=0x001000000000ffa3
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000fe48
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000fe25
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000faf2
- (unsigned long long)hash;	// IMP=0x001000000000f8d2
- (id)description;	// IMP=0x001000000000f85f
- (id)allKeys;	// IMP=0x001000000000f849
- (id)timestampClockVectorForStreamIdentifier:(id)arg1;	// IMP=0x001000000000f817
- (void)setVectorClockTo:(id)arg1 forStreamIdentifier:(id)arg2;	// IMP=0x001000000000f7f5
- (id)init;	// IMP=0x001000000000f79f

@end

