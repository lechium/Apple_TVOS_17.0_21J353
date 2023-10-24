//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol INSpeakableStringExport <NSObject, JSExport>
@property(retain, nonatomic) NSString *vocabularyIdentifier;
@property(retain, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSString *pronunciationHint;
@property(retain, nonatomic) NSString *spokenPhrase;
- (id)init;
@end

