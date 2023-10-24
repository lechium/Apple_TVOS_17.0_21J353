//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, TVSSPrivacyController, TVSSPrivacyStateAdapterView;
@protocol TVSSVisualContent;

@interface TVSSPrivacyVisualContentView : UIView
{
    id <TVSSVisualContent> _content;	// 8 = 0x8
    TVSSPrivacyStateAdapterView *_privacyAdapterView;	// 16 = 0x10
    TVSSPrivacyController *_privacyController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006d8a0
@property(retain, nonatomic) TVSSPrivacyController *privacyController; // @synthesize privacyController=_privacyController;
@property(retain, nonatomic) TVSSPrivacyStateAdapterView *privacyAdapterView; // @synthesize privacyAdapterView=_privacyAdapterView;
@property(copy, nonatomic) id <TVSSVisualContent> content; // @synthesize content=_content;
- (void)privacyControllerStateDidChange:(id)arg1;	// IMP=0x001000000006d7c0
- (void)_updatePrivacyAdapterView;	// IMP=0x001000000006d720
- (void)dealloc;	// IMP=0x001000000006cf40
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000006cb40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long visualizedControlState;

@end

