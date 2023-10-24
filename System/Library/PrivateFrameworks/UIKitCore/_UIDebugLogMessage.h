//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugLogMessage : NSObject
{
    NSString *_string;	// 8 = 0x8
    NSAttributedString *_attributedString;	// 16 = 0x10
}

+ (id)messageWithStyle:(unsigned long long)arg1 string:(id)arg2;	// IMP=0x0060000000dd554d
+ (id)messageWithPrefix:(id)arg1 color:(id)arg2 string:(id)arg3;	// IMP=0x0060000000dd51c8
+ (id)messageWithFormat:(id)arg1;	// IMP=0x0060000000dd502d
+ (id)messageWithString:(id)arg1;	// IMP=0x0060000000dd4f2c
+ (id)messageWithNewline;	// IMP=0x0060000000dd4f01
- (void).cxx_destruct;	// IMP=0x0000000000dd5a42
- (id)attributedDescription;	// IMP=0x0000000000dd5a30
- (id)description;	// IMP=0x0000000000dd5a1e
- (id)_attributedStringRepresentation;	// IMP=0x0000000000dd59d6
- (id)_stringRepresentation;	// IMP=0x0000000000dd599c
- (_Bool)_isTransparent;	// IMP=0x0000000000dd5994
- (_Bool)_isNode;	// IMP=0x0000000000dd598c
- (id)initWithString:(id)arg1 attributedString:(id)arg2;	// IMP=0x0000000000dd4df9

@end

