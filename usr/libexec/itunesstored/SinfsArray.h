//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SinfsArray : NSObject
{
    NSArray *_sinfs;	// 8 = 0x8
}

- (_Bool)_isRecognizedProperty:(id)arg1;	// IMP=0x002000000002a2f7
- (id)_copyValueForSINF:(id)arg1 property:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002a27c
- (id)sinfs;	// IMP=0x001000000002a265
- (id)copyValueForProperty:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002a093
- (id)copyValueForField:(long long)arg1 error:(id *)arg2;	// IMP=0x0010000000029fc4
- (void)dealloc;	// IMP=0x0010000000029f89
- (id)initWithSINFs:(id)arg1;	// IMP=0x0010000000029ec8
- (id)init;	// IMP=0x0010000000029eb4

@end
