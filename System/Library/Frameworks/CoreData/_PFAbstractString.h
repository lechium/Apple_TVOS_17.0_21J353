//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface _PFAbstractString : NSString
{
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x000000000007c2c9
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007c2a2
+ (id)alloc;	// IMP=0x000000000007c296
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x000000000007c28e
- (id)description;	// IMP=0x000000000007c3ba
- (unsigned long long)smallestEncoding;	// IMP=0x000000000007c3af
- (unsigned long long)fastestEncoding;	// IMP=0x000000000007c3a4
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;	// IMP=0x000000000007c352
- (const unsigned short *)_fastCharacterContents;	// IMP=0x000000000007c34a
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x000000000007c338
- (const char *)cString;	// IMP=0x000000000007c326
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007c2da
- (Class)classForCoder;	// IMP=0x000000000007c2b8
- (void)dealloc;	// IMP=0x000000000007c2ae

@end
