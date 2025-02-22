INSERT OR REPLACE INTO
  anime(
    id,
    title,
    english,
    japanese,
    synonym,
    type,
    status,
    episode_count,
    episode_length,
    date_start,
    date_end,
    image,
    trailer_id,
    age_rating,
    genres,
    tags,
    producers,
    studios,
    score,
    popularity,
    synopsis,
    last_aired_episode,
    next_episode_time,
    modified
  )
  VALUES(
    :id,
    :title,
    :english,
    :japanese,
    :synonym,
    :type,
    :status,
    :episode_count,
    :episode_length,
    :date_start,
    :date_end,
    :image,
    :trailer_id,
    :age_rating,
    :genres,
    :tags,
    :producers,
    :studios,
    :score,
    :popularity,
    :synopsis,
    :last_aired_episode,
    :next_episode_time,
    :modified
  )
