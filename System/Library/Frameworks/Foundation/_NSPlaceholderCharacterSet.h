//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSCharacterSet.h"

__attribute__((visibility("hidden")))
@interface _NSPlaceholderCharacterSet : NSCharacterSet
{
    NSCharacterSet *_original;	// 8 = 0x8
    NSCharacterSet *_invertedSet;	// 16 = 0x10
    struct {
        unsigned int _inverted:1;
        unsigned int _builtin:1;
        unsigned int _isCF:1;
        unsigned int _reserved:29;
    } _flags;	// 24 = 0x18
}

- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x000000000060c443
- (id)replacementObjectForKeyedArchiver:(id)arg1;	// IMP=0x000000000060c3ff
- (void)dealloc;	// IMP=0x000000000060c377
- (_Bool)_tryRetain;	// IMP=0x000000000060c316
- (_Bool)_isDeallocating;	// IMP=0x000000000060c2b3
- (oneway void)release;	// IMP=0x000000000060c254
- (unsigned long long)retainCount;	// IMP=0x000000000060c1ee
- (id)retain;	// IMP=0x000000000060c18f
- (id)autorelease;	// IMP=0x000000000060c130
- (id)invertedSet;	// IMP=0x000000000060c101
- (_Bool)isEmpty;	// IMP=0x000000000060c08a
- (id)bitmapRepresentation;	// IMP=0x000000000060c038
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000060bfa7
- (_Bool)hasMemberInPlane:(unsigned char)arg1;	// IMP=0x000000000060bf55
- (_Bool)isSupersetOfSet:(id)arg1;	// IMP=0x000000000060bed1
- (_Bool)longCharacterIsMember:(unsigned int)arg1;	// IMP=0x000000000060be9e
- (_Bool)characterIsMember:(unsigned short)arg1;	// IMP=0x000000000060be8c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000060be1d
- (void)_expandInverted;	// IMP=0x000000000060bd98
- (struct __CFCharacterSet *)_expandedCFCharacterSet;	// IMP=0x000000000060bd76
- (id)initWithSet:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000060bc54

@end
