//
//  TMSDiscoverSectionViewModel.h
//  TMSWeChat
//
//  Created by TmmmS on 2019/5/19.
//  Copyright © 2019年 TMS. All rights reserved.
//

#import <Foundation/Foundation.h>
@class TMSDiscoverModel;
@class TMSBaseCellViewModel;

NS_ASSUME_NONNULL_BEGIN

@interface TMSDiscoverSectionViewModel : NSObject <IGListDiffable>
@property(nonatomic, readonly, strong) TMSDiscoverModel *discoverModel;
@property(nonatomic, readonly, strong) NSArray <TMSBaseCellViewModel *>* cellViewModels;
//@property(nonatomic, readonly, assign) CGFloat cellHeight;

/// ContentCell上的事件
// 点击昵称
@property (nonatomic, readwrite, strong) RACSubject *didClickedNameSubject;
// 点击照片
@property (nonatomic, readwrite, strong) RACSubject *didClickedPicSubject;

/// DateCell 上的事件处理
@property(nonatomic, readwrite, strong) RACSubject *clickActionSubject;
// 点赞action
@property (nonatomic, readonly, strong) RACCommand *likeCommand;
// 评论action
@property (nonatomic, readwrite, strong) RACSubject *didClickedCommentSubject;
// 添加评论
@property (nonatomic, readwrite, strong) RACSubject *addCommentSubject;


- (instancetype)initWithDiscoverModel:(TMSDiscoverModel *)model;
@end

NS_ASSUME_NONNULL_END
