//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCFLocalizedString.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCFStaticLocalizedString : GCFLocalizedString
{
    NSString *_key;	// 8 = 0x8
    NSString *__realizedString;	// 16 = 0x10
}

+ (id)alloc;	// IMP=0x006000000001b41e
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000001b406
- (id)redactedDescription;	// IMP=0x000000000001b6ee
- (id)table;	// IMP=0x000000000001b6e1
- (id)bundle;	// IMP=0x000000000001b6c8
- (id)key;	// IMP=0x000000000001b6b7
- (id)_realizedString;	// IMP=0x000000000001b60e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b509
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b4be
- (Class)classForCoder;	// IMP=0x000000000001b4ad
- (void)dealloc;	// IMP=0x000000000001b46b
- (unsigned long long)retainCount;	// IMP=0x000000000001b45e
- (_Bool)_tryRetain;	// IMP=0x000000000001b456
- (_Bool)_isDeallocating;	// IMP=0x000000000001b44e
- (oneway void)release;	// IMP=0x000000000001b448
- (id)retain;	// IMP=0x000000000001b43f
- (id)autorelease;	// IMP=0x000000000001b436

@end
