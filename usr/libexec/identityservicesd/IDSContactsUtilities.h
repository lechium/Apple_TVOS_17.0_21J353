//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore;

@interface IDSContactsUtilities : NSObject
{
    CNContactStore *_contactStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001c811f
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)nameForContactMatchingURI:(id)arg1;	// IMP=0x00100000001c748e
- (id)predicateForURI:(id)arg1;	// IMP=0x00100000001c7209
- (id)init;	// IMP=0x00100000001c7107

@end

