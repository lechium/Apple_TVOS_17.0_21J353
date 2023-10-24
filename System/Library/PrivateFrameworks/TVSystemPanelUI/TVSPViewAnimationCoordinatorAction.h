//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface TVSPViewAnimationCoordinatorAction : NSObject
{
    _Bool _isSetup;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    UIView *_view;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    CDUnknownBlockType _animationProvider;	// 40 = 0x28
    NSString *_diagnosticDescription;	// 48 = 0x30
    struct CGRect _frame;	// 56 = 0x38
}

+ (id)actionWithOptions:(unsigned long long)arg1 view:(id)arg2 identifier:(id)arg3 frame:(struct CGRect)arg4 isSetup:(_Bool)arg5 diagnosticDescription:(id)arg6 animationProvider:(CDUnknownBlockType)arg7;	// IMP=0x0060000000065100
- (void).cxx_destruct;	// IMP=0x0000000000065950
@property(readonly, nonatomic) NSString *diagnosticDescription; // @synthesize diagnosticDescription=_diagnosticDescription;
@property(readonly, nonatomic) CDUnknownBlockType animationProvider; // @synthesize animationProvider=_animationProvider;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) _Bool isSetup; // @synthesize isSetup=_isSetup;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) _Bool shouldPerformAnimation;
@property(readonly, nonatomic) _Bool shouldUpdateFrame;
- (id)description;	// IMP=0x0000000000065630
- (void)perform;	// IMP=0x0000000000065460
- (id)initWithOptions:(unsigned long long)arg1 view:(id)arg2 identifier:(id)arg3 frame:(struct CGRect)arg4 isSetup:(_Bool)arg5 diagnosticDescription:(id)arg6 animationProvider:(CDUnknownBlockType)arg7;	// IMP=0x0000000000065270

@end

