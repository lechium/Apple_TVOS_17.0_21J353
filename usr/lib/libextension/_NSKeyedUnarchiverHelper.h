//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSKeyedUnarchiverHelper : NSObject
{
    NSArray *_allowed;	// 8 = 0x8
    unsigned int _lastRef;	// 16 = 0x10
    NSMutableArray *_allowedClasses;	// 24 = 0x18
    NSError *_decodeError;	// 32 = 0x20
    _Bool expectsUnnestedCollection;	// 40 = 0x28
    _Bool decodedCollection;	// 41 = 0x29
}

@property(copy) NSError *decodeError; // @synthesize decodeError=_decodeError;
- (_Bool)classNameAllowed:(Class)arg1;	// IMP=0x000000000069e118
- (void)setAllowedClassNames:(id)arg1;	// IMP=0x000000000069e0e3
- (id)allowedClassNames;	// IMP=0x000000000069e0cc
- (void)dealloc;	// IMP=0x000000000069e058
- (id)init;	// IMP=0x000000000069e02f

@end

