//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL, VSCredentialEntryPicker, VSExpressionEvaluator;
@protocol VSCredentialEntryViewModelDelegate;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryViewModel
{
    NSArray *_credentialEntryFields;	// 8 = 0x8
    VSCredentialEntryPicker *_picker;	// 16 = 0x10
    NSURL *_linkURL;	// 24 = 0x18
    NSString *_linkTitle;	// 32 = 0x20
    NSArray *_buttons;	// 40 = 0x28
    NSString *_recentsTitle;	// 48 = 0x30
    NSString *_recentsMessage;	// 56 = 0x38
    NSString *_additionalMessage;	// 64 = 0x40
    id <VSCredentialEntryViewModelDelegate> _delegate;	// 72 = 0x48
    VSExpressionEvaluator *_buttonExpressionEvaluator;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000005796f
@property(retain, nonatomic) VSExpressionEvaluator *buttonExpressionEvaluator; // @synthesize buttonExpressionEvaluator=_buttonExpressionEvaluator;
@property(nonatomic) __weak id <VSCredentialEntryViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *additionalMessage; // @synthesize additionalMessage=_additionalMessage;
@property(copy, nonatomic) NSString *recentsMessage; // @synthesize recentsMessage=_recentsMessage;
@property(copy, nonatomic) NSString *recentsTitle; // @synthesize recentsTitle=_recentsTitle;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSString *linkTitle; // @synthesize linkTitle=_linkTitle;
@property(copy, nonatomic) NSURL *linkURL; // @synthesize linkURL=_linkURL;
@property(retain, nonatomic) VSCredentialEntryPicker *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) NSArray *credentialEntryFields; // @synthesize credentialEntryFields=_credentialEntryFields;
- (void)clearFieldsAfterUsername;	// IMP=0x000000000005769d
- (void)pickerDidSelectRow:(unsigned long long)arg1;	// IMP=0x000000000005764c
- (void)buttonTappedAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000575fb
- (void)validateCredentialEntryFields;	// IMP=0x0000000000057409
- (void)configureWithRequest:(id)arg1;	// IMP=0x0000000000056f59
- (void)_bindField:(id)arg1;	// IMP=0x0000000000056d58
- (void)_unbindField:(id)arg1;	// IMP=0x0000000000056d01

@end

