//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SFUITTRReportComponent;

__attribute__((visibility("hidden")))
@interface SFUITTRReport : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_desc;	// 16 = 0x10
    SFUITTRReportComponent *_component;	// 24 = 0x18
}

+ (id)peopleSuggestionReport;	// IMP=0x006000000002e854
- (void).cxx_destruct;	// IMP=0x000000000002e9f9
@property(retain, nonatomic) SFUITTRReportComponent *component; // @synthesize component=_component;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 desc:(id)arg2 component:(id)arg3;	// IMP=0x000000000002e8cc

@end

