//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupDisplayContext : NSObject
{
    NSString *_headingKind;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002126a
- (void).cxx_destruct;	// IMP=0x00000000000215da
@property(readonly, retain, nonatomic) NSString *headingKind; // @synthesize headingKind=_headingKind;
- (id)description;	// IMP=0x0000000000021532
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000021420
- (unsigned long long)hash;	// IMP=0x00000000000213a5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002139a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002132a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021272
- (id)initWithHeadingKind:(id)arg1;	// IMP=0x00000000000211ff

@end

