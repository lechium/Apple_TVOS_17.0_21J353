//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class CNContactsEnvironment, CNiOSPersonFetchRequest;
@protocol CNCancelable;

@protocol CNiOSContactAsyncPredicate <CNiOSContactPredicate>
- (id <CNCancelable>)cn_fetchPeopleInAddressBook:(void *)arg1 fetchRequest:(CNiOSPersonFetchRequest *)arg2 progressiveResults:(void (^)(NSArray *, NSDictionary *))arg3 completion:(void (^)(NSError *))arg4 environment:(CNContactsEnvironment *)arg5;
@end

