//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTextEncapsulation, UIFont;

@interface TVSSTextContent : NSObject
{
    NSString *_string;	// 8 = 0x8
    UIFont *_font;	// 16 = 0x10
    NSTextEncapsulation *_textEncapsulation;	// 24 = 0x18
    id _userInfo;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000e5ec0
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSTextEncapsulation *textEncapsulation; // @synthesize textEncapsulation=_textEncapsulation;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e5d00
- (Class)preferredVisualizerViewClass;	// IMP=0x00100000000e5cd0
- (id)initWithString:(id)arg1 font:(id)arg2 textEncapsulation:(id)arg3 userInfo:(id)arg4;	// IMP=0x00100000000e5b70
- (id)initWithString:(id)arg1 font:(id)arg2 textEncapsulation:(id)arg3;	// IMP=0x00100000000e5a90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
