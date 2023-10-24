//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface LPAudioPlayButtonTheme : NSObject
{
    _Bool _useInvertedInactiveState;	// 8 = 0x8
    UIColor *_keyColor;	// 16 = 0x10
    UIColor *_secondaryColor;	// 24 = 0x18
    UIColor *_outerBorderColor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004d00d
@property(readonly, nonatomic) _Bool useInvertedInactiveState; // @synthesize useInvertedInactiveState=_useInvertedInactiveState;
@property(readonly, retain, nonatomic) UIColor *outerBorderColor; // @synthesize outerBorderColor=_outerBorderColor;
@property(readonly, retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(readonly, retain, nonatomic) UIColor *keyColor; // @synthesize keyColor=_keyColor;
- (id)initWithKeyColor:(id)arg1 secondaryColor:(id)arg2 outerBorderColor:(id)arg3 useInvertedInactiveState:(_Bool)arg4;	// IMP=0x000000000004ceef

@end

