//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIWebDateTimePopoverViewController;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePopover
{
    UIWebDateTimePopoverViewController *_webDateTimeViewController;	// 8 = 0x8
}

@property(retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController; // @synthesize _webDateTimeViewController;
- (void)controlEndEditing;	// IMP=0x000000000076f3ec
- (void)controlBeginEditing;	// IMP=0x000000000076f3a7
- (id)controlView;	// IMP=0x000000000076f39f
- (void)dealloc;	// IMP=0x000000000076f35f
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;	// IMP=0x000000000076f149
- (void)clear:(id)arg1;	// IMP=0x000000000076f113

@end

