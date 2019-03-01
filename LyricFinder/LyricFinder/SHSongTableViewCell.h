//
//  SHSongTableViewCell.h
//  LyricFinder
//
//  Created by Sean Hendrix on 3/1/19.
//  Copyright © 2019 Sean Hendrix. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SHSongTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *songTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *artistNameLabel;

@end

NS_ASSUME_NONNULL_END