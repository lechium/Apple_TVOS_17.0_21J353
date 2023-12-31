//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CATSharingMessage : NSObject
{
    long long _messageType;	// 8 = 0x8
    NSDictionary *_contentDictionaryValue;	// 16 = 0x10
}

+ (id)instanceWithDictionary:(id)arg1;	// IMP=0x001000000004b00b
- (void).cxx_destruct;	// IMP=0x000000000004b1b4
@property(readonly, copy, nonatomic) NSDictionary *contentDictionaryValue; // @synthesize contentDictionaryValue=_contentDictionaryValue;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithMessageType:(long long)arg1 contentDictionary:(id)arg2;	// IMP=0x000000000004ae94
- (id)initWithContentMessage:(id)arg1;	// IMP=0x000000000004ae06

@end

