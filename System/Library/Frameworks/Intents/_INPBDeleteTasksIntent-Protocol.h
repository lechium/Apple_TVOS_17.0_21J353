//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBIntentMetadata, _INPBTask, _INPBTaskList;

@protocol _INPBDeleteTasksIntent <NSObject>
+ (Class)tasksType;
@property(readonly, nonatomic) unsigned long long tasksCount;
@property(copy, nonatomic) NSArray *tasks;
@property(readonly, nonatomic) _Bool hasTaskList;
@property(retain, nonatomic) _INPBTaskList *taskList;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasAll;
@property(nonatomic) _Bool all;
- (_INPBTask *)tasksAtIndex:(unsigned long long)arg1;
- (void)addTasks:(_INPBTask *)arg1;
- (void)clearTasks;
@end

