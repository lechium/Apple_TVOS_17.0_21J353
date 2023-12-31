//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SIBCButtonNotificationMessage : NSObject
{
    NSString *_applicationId;	// 8 = 0x8
    long long _buttonAction;	// 16 = 0x10
}

+ (id)messageId;	// IMP=0x00100000000089ac
- (void).cxx_destruct;	// IMP=0x0000000000008a92
@property(readonly, nonatomic) long long buttonAction; // @synthesize buttonAction=_buttonAction;
@property(readonly, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
@property(readonly, copy) NSString *description;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x0000000000008501
- (id)dictionaryEncoding;	// IMP=0x00000000000084f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

