//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSPredicate;

@protocol _CDInteractionQuerying
- (NSArray *)queryInteractionsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3;
- (void)countContactsUsingPredicate:(NSPredicate *)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)queryContactsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)countInteractionsUsingPredicate:(NSPredicate *)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)queryInteractionsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (unsigned long long)countContactsUsingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)queryContactsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)countInteractionsUsingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)queryInteractionsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
@end

