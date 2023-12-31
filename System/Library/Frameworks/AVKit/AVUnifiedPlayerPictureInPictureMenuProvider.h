//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIAction, UIMenuElement;
@protocol AVUnifiedPlayerPictureInPictureMenuDelegate;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerPictureInPictureMenuProvider : NSObject
{
    _Bool _available;	// 8 = 0x8
    _Bool _active;	// 9 = 0x9
    UIAction *_startAction;	// 16 = 0x10
    UIAction *_optionsMenuAction;	// 24 = 0x18
    id <AVUnifiedPlayerPictureInPictureMenuDelegate> _delegate;	// 32 = 0x20
}

+ (id)_pipOptionsActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000004386f
+ (id)_startActionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000004376b
- (void).cxx_destruct;	// IMP=0x0000000000043d43
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(nonatomic) __weak id <AVUnifiedPlayerPictureInPictureMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performStart:(id)arg1;	// IMP=0x0000000000043cc2
@property(readonly, nonatomic) UIAction *optionsMenuAction; // @synthesize optionsMenuAction=_optionsMenuAction;
@property(readonly, nonatomic) UIAction *startAction; // @synthesize startAction=_startAction;
- (_Bool)isPiPOptionsMenuAction:(id)arg1;	// IMP=0x0000000000043b31
@property(readonly, nonatomic) UIMenuElement *pipOptionsMenuElement;
- (void)prepareForDisplay;	// IMP=0x0000000000043a62
@property(readonly, nonatomic) NSArray *menuElements;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

