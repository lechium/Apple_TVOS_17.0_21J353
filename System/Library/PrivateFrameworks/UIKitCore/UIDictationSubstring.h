//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationSubstring : NSObject
{
    NSString *_string;	// 8 = 0x8
    struct _NSRange _range;	// 16 = 0x10
    struct _NSRange _enclosingRange;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b12dfe
@property(nonatomic) struct _NSRange enclosingRange; // @synthesize enclosingRange=_enclosingRange;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (id)initWithString:(id)arg1 range:(struct _NSRange)arg2 enclosingRange:(struct _NSRange)arg3;	// IMP=0x0000000000b12d1e

@end

