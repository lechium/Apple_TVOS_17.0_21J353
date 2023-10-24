//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, NSString, VUIAction;

__attribute__((visibility("hidden")))
@interface VUIActionAlert
{
    NSString *_title;	// 8 = 0x8
    NSString *_descriptionString;	// 16 = 0x10
    NSMutableArray *_actionItems;	// 24 = 0x18
    NSString *_dismissButtonTitle;	// 32 = 0x20
    VUIAction *_cancelAction;	// 40 = 0x28
    long long _style;	// 48 = 0x30
    NSDictionary *_dialogMetrics;	// 56 = 0x38
    Class _controllerClass;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000fde24
@property(retain, nonatomic) Class controllerClass; // @synthesize controllerClass=_controllerClass;
@property(retain, nonatomic) NSDictionary *dialogMetrics; // @synthesize dialogMetrics=_dialogMetrics;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) VUIAction *cancelAction; // @synthesize cancelAction=_cancelAction;
@property(retain, nonatomic) NSString *dismissButtonTitle; // @synthesize dismissButtonTitle=_dismissButtonTitle;
@property(retain, nonatomic) NSMutableArray *actionItems; // @synthesize actionItems=_actionItems;
@property(retain, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fd2c8
- (id)initWithContextData:(id)arg1 appContext:(id)arg2 controllerClass:(Class)arg3;	// IMP=0x00000000000fcbc8

@end

