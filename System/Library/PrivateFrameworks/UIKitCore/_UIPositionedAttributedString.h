//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, UITextPosition;

__attribute__((visibility("hidden")))
@interface _UIPositionedAttributedString : NSObject
{
    NSAttributedString *_string;	// 8 = 0x8
    UITextPosition *_position;	// 16 = 0x10
}

+ (id)attributedString:(id)arg1 atPosition:(id)arg2;	// IMP=0x00600000010ee545
- (void).cxx_destruct;	// IMP=0x00000000010ee786
@property(readonly, nonatomic) UITextPosition *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSAttributedString *string; // @synthesize string=_string;
- (id)description;	// IMP=0x00000000010ee5e8

@end
