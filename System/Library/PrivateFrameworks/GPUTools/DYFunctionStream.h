//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DYFunctionStream : NSObject
{
}

- (void)enumerateFunctionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cf9f
- (unsigned long long)readFunctions:(struct Function *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000000cf87
- (const struct Function *)readFunction;	// IMP=0x000000000000cf6f
- (const struct Function *)peekFunction;	// IMP=0x000000000000cf57
- (_Bool)resetToFunction:(const struct Function *)arg1;	// IMP=0x000000000000cf3f
- (void)clearResetMarker;	// IMP=0x000000000000cf2a
- (void)setResetMarker;	// IMP=0x000000000000cf15
- (void)reset;	// IMP=0x000000000000cf00

@end
